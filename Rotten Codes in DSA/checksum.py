def checksum(s1,s2):
    length=len(s1)
    check_sum=""
    carry=0
    for i in range(length-1,-1,-1):
        if s1[i]=='0' and s2[i]=='0':
            if carry==0:
                check_sum="0"+check_sum
            else:
                check_sum="1"+check_sum
                carry=0
        elif (s1[i]=='0' and s2[i]=='1') or (s1[i]=='1' and s2[i]=='0'):
            if carry==0:
                check_sum="1"+check_sum
                carry=0
            else:
                check_sum="0"+check_sum
                carry=1 
        else:
            if carry==0:
                check_sum="0"+check_sum
                carry=1 
            else:
                check_sum="1"+check_sum
                carry=1
    if carry==1:
        check_sum="1"+check_sum
        carry=0
    check_sum=list(check_sum)
    for i in range(0,len(check_sum)):
        if check_sum[i]=="0":
            check_sum[i]="1"
        else:
            check_sum[i]="0"
    check_sum=''.join(check_sum)
    print(check_sum)
        
checksum("11001100","10101010")
        