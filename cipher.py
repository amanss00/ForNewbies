alphabet = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z','a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

def cipher(direction_code,textmsg,shiftpos):
    new_word=""
    encode = True
    
    if(direction_code=="decode"):
      shiftpos*=-1
      encode=False
    
    for i in textmsg:  
      if i in alphabet:
        ind = alphabet.index(i)
        newletter = ind+shiftpos%26
        new_word+=alphabet[newletter]
      else:
        new_word+=i
    if(encode==True):
      print(f"The encoded msg is {new_word}")
    else:
      print(f"The decoded msg is {new_word}")
      
    
game_is_finished=False

while not game_is_finished:
  direction = input("Type 'encode' to encrypt, type 'decode' to decrypt:\n")
  text = input("Type your message:\n").lower()
  shift = int(input("Type the shift number:\n"))
  cipher(direction,text,shift) 
  game_continue = input("Type 'yes' if u want to continue and type 'no' if u want to stop\n").lower()
  if(game_continue=="no"):
      game_is_finished=True
      print("Good Bye!!")
