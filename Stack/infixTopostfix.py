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
        if cha[i]==" ":
            pass
        elif(cha[i].isnumeric()==True):
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


# it is a very easy and common way to make postfix_evalution
def postfix_evalution(cha):
    # create list which will acts like stack 
    l=[]
    # answer to store answer for all iteration 
    answer=0
    print(cha)
    # print input postfix equation which we created earlier 
    for i in range(len(cha)):
        # runing loop and adding numeric value in stack 
        # if we tackle operator like * / + -  just pop value and do operation 
        # second pop will be first Element in operator as above operator has LR associtivity 
        # and if operator is "^"  the first pop will be first Variable and it has RL associvity 
        if(cha[i].isnumeric()==True):
            l.append(cha[i])
            # print(l)
        elif(cha[i]=="+" or cha[i]=="-" or cha[i]=="/" or cha[i]=="*"):
            # pop Element
            b=int(l.pop())
            a=int(l.pop())
            # do calculations with help of  operator function 
            answer=ops[cha[i]](a,b)
            l.append(answer)
            # print(l)
        elif(cha[i]=="^"):
            # pop Element 
            b=int(l.pop())
            a=int(l.pop())
            # do calculations with help of  operator function 
            answer=ops[cha[i]](b,a)
            # push back result in stack 
            l.append(answer)
            # print(l)
    # pop and return answer 
    return l.pop()


def main():
    # a="a+b*(c^d-e)^(f+g*h)-i"
    a="a*b+((c-d)*p-q*s)/r+m/(n*x)"
    print(infixToPostfix(a))
    # print(infixToPostfix("1+(2 * 3) - (4^ (5^ 6))"))
    # print(infixToPostfix(a))
    # a=ops["+"](10,20)
    # print(a)
    # print(postfix_evalution("234*+82/-"))

main()

# abcd^e-fgh*+^*+i-

# algorithms for infix to postfix conversion 

# if character is alphabet direct add it in output string 

# if character is (  push it in stack 

# if character is ) pop elements and add in output string  and not add ( in output string

# if character is a operator like +,-,/,* and stack is empty just push it in stack

# if character is a operator like +,-,/,* and stack is not Empty then check for Percendense of top of stack and if precednce of top is 
# smaller than Element which we want to push then just push Element 

# if character is a operator like +,-,/,* and stack is not Empty then check for Percendense of top of stack and if precednce of top is 
# greater  than or equal to Element which we want to push then pop elements in stack upto point which above condition not satisfy

#as all iteration are done pull back elements from stack AND add it in output string 
