print("Rock ,Paper,Scissor...")
win=0
player1=0
player2=0
trails=int(input("No.of Trails\n"))
while(win<trails):
   choose1=str(input("Player 1 choose any R or S or P in capital\n"))
   choose2=str(input("Player 2 choose any R or S or P in capital\n"))
   if(choose1==choose2):
    print("Same")
   elif((choose1=="R" and choose2=="S") or (choose1=="P" and choose2=="R") or (choose1=="S" and choose2=="P")):
    player1=player1+1 
   elif((choose2=="R" and choose1=="S") or (choose2=="P" and choose1=="R") or (choose2=="S" and choose1=="P")):
    player2=player2+1  
   win=win+1
if(player1>player2):
    print("Player 1 is the Winner")
elif(player2>player1):
    print("Player 2 is the Winner")
else:
    print("Tie")