# Merge two arrays using binart sort
def merge():
    a = [1,2,3,4,5,6,7,8,9,10]
    b = [1,2,7,11,12,13,14,15,16,17,18,19,20]
    c = []
    i = 0
    j = 0
    while i < len(a) and j < len(b):
        if a[i] < b[j]:
            c.append(a[i])
            i += 1
        else:
            c.append(b[j])
            j += 1

    while i < len(a):
        c.append(a[i])
        i += 1


    while j < len(b):
        c.append(b[j])
        j += 1


    print(c)
merge()


# Path: app.py
# Merge two arrays using recursion
