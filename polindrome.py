def parser():
    while 1:
        data = list(input().split(' '))
        for number in data:
            if len(number) > 0:
                yield(number)   

input_parser = parser()

def get_word():
    global input_parser
    return next(input_parser)

def get_number():
    data = get_word()
    try:
        return int(data)
    except ValueError:
        return float(data)

def remove_xml(text):
    R = ""
    F = True
    for z in text:
        if z == '<' :
            F = False
        if (F):
            res += z
        if z == '>':
            F = True

    return res

a = get_number()
b = get_number()
r,c = input().split(',')
r,c = int(r),int(c)
SorL = get_word()
lines = []
for i in range(a):
    lines.append(input())
raw_xml =""
for j in range(b):
    raw_xml += input()