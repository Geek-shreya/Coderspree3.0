

def reverseStringWordWise(string):
    
    #Your code goes here
    w = string.split()

    rev = w[::-1]

    revs = " ".join(rev)

    return revs














    


string = input()
ans = reverseStringWordWise(string)
print(ans)
        
