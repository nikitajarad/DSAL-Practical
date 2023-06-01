'''
To create ADT that implement the "set" concept.  a. Add (new Element) -Place a value into the set ,
 b. Remove (element) Remove the value  c. Contains (element) Return true if element is in collection, 
 d. Size () Return number of values  in collection Iterator() Return an iterator used to loop over
collection, e. Intersection of two sets , f. Union of two sets, g. Difference between two sets, h. Subset
'''

# sets are define 
Set1= {0, 2, 4, 6, 8}; 
Set2 = {1, 2, 3, 4, 5}; 
while True:
  print("1)Insert\n2)Remove\n3)Size\n4)Search\n5)Union\n6)Intersection\n7)Difference\n8)Symmetric difference\n9)Subset\n10)Exit\n")
  ch=int(input("Enter your choice:"))
  if ch==1:
    print("Operations on Set DS")
    #Insert 
    Insert=Set1.add(9)
    print("1)Insert:", Set1)

  elif ch==2:
    #Remove
    Remove=Set1.remove(9)
    print("2)Remove:",Set1)

  elif ch==3:
    #Size print("3)Size:",len(Set1))
    Cnt=0
    for i in Set1:
        i=Cnt
        Cnt+=1
    print("3)Size:",Cnt)

  elif ch==4:
    #Search
    print("4) Contain or not:",8 in Set1)

  elif ch==5:
    #union 
    print("5)Union :", Set1 | Set2 )

  elif ch==6:
    #intersection 
    print("6)Intersection :", Set1 & Set2)

  elif ch==7:
    #difference 
    print("7)Difference :", Set1 - Set2)

  elif ch==8:
    #symmetric difference 
    print("8)Symmetric difference :",Set1 ^ Set2)

  elif ch==9:
    #Subset
    print("9)Subset:",Set1.issubset(Set2))

  else:
    break
