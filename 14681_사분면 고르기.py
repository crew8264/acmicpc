n1 = int(input())
n2 = int(input())

if((n1 > 0) & (n2 > 0)) :
  print("1")
elif((n1 < 0) & (n2 > 0)) :
  print("2")
elif((n1 < 0) & (n2 < 0)) :
  print("3")
elif((n1 > 0) & (n2 < 0 )) :
  print("4")