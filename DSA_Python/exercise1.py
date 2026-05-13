list_expenses = [2200, 2350, 2600, 2130, 2190]

#Extra spent dollars in Feb
print(list_expenses[1] - list_expenses[0])

#Total expenses in first quarter

print("List of expenses for first quarter are :", list_expenses[0] + list_expenses[1] + list_expenses[2])

#Find out any month didu spend 2000$

print("Did I spent $2000 in last month? ", 2000 in list_expenses)

#June month just finished and your expense is  1980 dollar. Add this time to our monthly expenses list.

list_expenses.append(1980)

print("Expenses at the end of June: ", list_expenses)

# You retruned an item that you bought in April and got refund of $200

list_expenses[3] = list_expenses[3] - 200
print("Expenses after $200 return in April : ", list_expenses)