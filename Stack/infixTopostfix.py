import operator

ops={"+":operator.add,"-":operator.sub,"*":operator.mul,"/":operator.truediv,"^":operator.pow}
# this function will return the precedense of character you gave inside iT as a Parameter 
def precedence(c):
    if (c == '^'):
        return 3
    elif(c=="/" or c=="*"):
        return 2
    elif(c=="+" or c=="-"):
        return 1
    else:
        return -1


# this will peek and see the value at the top of the array and return it 
def stackTop(l):
    return l[len(l)-1]

# here main game start 

def infixToPostfix(cha):
    # printing the input array 
    print(cha)
    d=""
    # creating a list which will acts as the array 
    l=[]
    # so as postfix expression gave answer in one scan so we will perform same algo 
    for i in range(len(cha)):
        if(cha[i].isnumeric()==True):
            d=d+cha[i]
        elif(cha[i]=="("):
            l.append("(")
        elif(cha[i]==")"):
            while(len(l)!=0):
                    if(stackTop(l)=="("):
                        l.pop()
                        break
                    else:
                        d=d+l.pop()
        else:
            if(len(l)==0):
                l.append(cha[i])
            elif(precedence(stackTop(l)) < precedence(cha[i])):
                l.append(cha[i])   
            else:

                while(len(l)!=0):
                    if(precedence(stackTop(l)) >= precedence(cha[i])):
                        d=d+l.pop()

                    else:
                        break
                l.append(cha[i])
    
    while(len(l)!=0):
        d=d+l.pop()
    
    return d


def postfix_evalution(cha):
    l=[]
    answer=0
    print(cha)
    for i in range(len(cha)):
        if(cha[i].isnumeric()==True):
            l.append(cha[i])
            # print(l)
        elif(cha[i]=="+" or cha[i]=="-" or cha[i]=="/" or cha[i]=="*"):
            b=int(l.pop())
            a=int(l.pop())
            answer=ops[cha[i]](a,b)
            l.append(answer)
            # print(l)
        elif(cha[i]=="^"):
            b=int(l.pop())
            a=int(l.pop())
            answer=ops[cha[i]](b,a)
            l.append(answer)
            # print(l)
    return answer


def main():
    # a="a+b*(c^d-e)^(f+g*h)-i"
    a="3*5+6/2-4"
    print(postfix_evalution(infixToPostfix(a)))
    # print(infixToPostfix(a))
    # a=ops["+"](10,20)
    # print(a)

main()

# abcd^e-fgh*+^*+i-

# algorithms

# if character is alphabet direct add it in output string 

# if character is (  push it in stack 

# if character is ) pop elements and add in output string  and not add ( in output string

# if character is a operator like +,-,/,* and stack is empty just push it in stack

# if character is a operator like +,-,/,* and stack is not Empty then check for Percendense of top of stack and if precednce of top is 
# smaller than Element which we want to push then just push Element 

# if character is a operator like +,-,/,* and stack is not Empty then check for Percendense of top of stack and if precednce of top is 
# greater  than or equal to Element which we want to push then pop elements in stack upto point which above condition not satisfy

#as all iteration are done pull back elements from stack AND add it in output string 
