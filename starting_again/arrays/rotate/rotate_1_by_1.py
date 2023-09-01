array = list(range(1, 10))
d = 5
position = 1


while position <= d:
    last = array[0]

    for i, _ in enumerate(array[0:-1]):
        array[i] = array[i+1]

    array[-1] = last 
    position+=1

print(array)
