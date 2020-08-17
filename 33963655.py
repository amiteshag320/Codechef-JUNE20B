t=int(input())
for test in range(t):
    n=int(input())
    lst=list(map(int, input().split()))
    count=0
    suma=0
    s=0
    if lst[0]!=5:
        print("NO\n")
    else:
        for i in range(n):
            if lst[i]==5:
                count+=1
            if lst[i]==10:
                suma+=1
                if count>0:
                    count-=1
                else:
                    print("NO\n")
                    s=1
                    break;
            if lst[i]==15:
                if suma>0:
                    suma-=1
                elif count>1:
                    count-=2
                else:
                    print("NO\n")
                    s=1
                    break;
        if s==0:
           print("YES\n")
