import random

ticket_lottery = random.sample(range(0, 9), k=7)

print("Provide 7 numbers from 0 to 9 (one by one- separated by spaces):")
ticket_input = list(map(int, input().split()))

tl = sorted(ticket_lottery)
ti = sorted(ticket_input)

for item in ti:
    points = 0
    if ((item <= len(ti)) and (item in tl)):
            points += 1
            print("Item: {}, Lotto:{}, Points:{}".format(item, tl, points))
    elif((item <= len(ti)) and (item not in tl)):
            item += 1
            continue
    else:
            break

print("You got {} points in total".format(points))
