while 1:
    try:
        a=input()
        string=['abc','def','ghi','jkl','mno','pqrs','tuv','wxyz']
        sum=0
        index=-1 #上一个在第几个字符串
        for i in a:
            for t in range(len(string)):
                if i in string[t]:
                    if index==t:
                        sum+=2
                    sum+=string[t].index(i)+1
                    index=t
                    break
        print(sum)
    except:
        break

