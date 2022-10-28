rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''

paper = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''

#Write your code below this line 👇
import random
game_images =[rock,paper,scissors]
print("Enter your choice\n0 for rock\n1 for paper\n2 for scissors")
you = int(input())
if(you>2 or you<0):
  print("You have entered invalid choice")
else:
  game_images =[rock,paper,scissors]
  print("You chose:")
  print(game_images[you])
  comp = random.randint(0,2)
  print("Computer chose:")
  print(game_images[comp])
  if(you==0 & comp==2):
    print("You win")
  elif(comp==0 & you==2):
    print("You lose")
  elif(you>comp):
    print("You win")
  elif(comp>you):
    print("You lose")
  elif(you==comp):
    print("Draw")
  
