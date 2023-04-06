def combinatorics(x):
    x = input('enter a string')
    
    #there are 6 ways that the string can be outputted
   
    #first - [1,2,3]
    print(x[0:2])
    
    #second - [3,2,1]
    print(x[::-1])
    
    #third - [1,3,2]
    print(x[0], x[2], x[1])
    
    #fourth - [2,1,3]
    print(x[1], x[0], x[2])
    
    #fifth - [2,3,1]
    print(x[1], x[2], x[0])
    
    #sixth - [3,1,2]
    print(x[2], x[0], x[1])
    