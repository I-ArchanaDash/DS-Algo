#User function Template for python3


#Function to find matching decimal representation of a string as on the keypad.
def printNumber(s,n):
   
    #CODE HERE
    two = "abc"
    three = "def"
    four = "ghi"
    five = "jkl"
    six = "mno"
    seven = "pqrs"
    eight = "tuv"
    nine = "wxyz"
    str="";
    for i in s:
        if i in two:
            str+="2"
        elif i in three:
            str+="3"
        elif i in four:
            str+="4"
        elif i in five:
            str+="5"
        elif i in six:
            str+="6"
        elif i in seven:
            str+="7"
        elif i in eight:
            str+="8"
        else:
            str+="9"
    return str
        

#{ 
#  Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
if __name__=='__main__':
    t=int(input())
    for _ in range(t):
        
        
        s=input()
        n=len(s)
        print(printNumber(s,n))
# } Driver Code Ends