import cv2
import datetime
import pyttsx3
import winsound
engine=pyttsx3.init()
def talk(text):
    engine.say(text)
    engine.runAndWait()
cam=cv2.VideoCapture(0)

while cam.isOpened():
    ret,frame1=cam.read() 
    #compairing two frames to detect any motion in new frame with the help of new frame
    original_frame=frame1.copy()

    ret,frame2=cam.read()

    diff=cv2.absdiff(frame1,frame2)

    # diif showing colourful oytput,which may leads to error,so converted it to gray in nest step
    gray=cv2.cvtColor(diff,cv2.COLOR_RGB2GRAY)

    blur=cv2.GaussianBlur(gray,(5,5),0)

    # TO GET RID OF NOISE IN AN IMAGE USE THRESHOLD
    threshold,thresh=cv2.threshold(blur,20,255,cv2.THRESH_BINARY)

    # USING DILATED T ENHANCE THE IMAGE
    dilated=cv2.dilate(thresh,None,iterations=3)

    #YOU CAN SAY THAT TO DETECT EDGES
    contours, _ = cv2.findContours(dilated,cv2.RETR_TREE,cv2.CHAIN_APPROX_SIMPLE)
    #cv2.drawContours(frame1,contours,-1,(0,255,0),2)
    for c in contours:
        if cv2.contourArea(c)<5000:
            continue
        x,y,w,h=cv2.boundingRect(c)
        cv2.rectangle(frame1,(x,y),(x+w,y+h),(0,255,0),2)
        time_stamp=datetime.datetime.now().strftime("%Y-%m-%d-%H-%M-%S")
        file_name=f"intruder-{time_stamp}.png"
        winsound.Beep(500,200)
        talk("stay away from my laptop")
        #winsound.PlaySound("alert.wav",winsound.SND_ASYNC)
        cv2.imwrite(file_name,original_frame)
    if cv2.waitKey(10)==ord("q"):
        break
    cv2.imshow("be sure",frame1)