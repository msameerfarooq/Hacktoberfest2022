# Program to display calendar for a given month/year

# import calendar module
import calendar

yy = 2022  # year
mm = 10    # month

# month and year input from the user
# yy = int(input("Enter year: "))
# mm = int(input("Enter month: "))

# display the calendar
print(calendar.month(yy, mm))
