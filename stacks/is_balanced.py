def is_balanced(expression):
    stack = []
    opening_symbols = "([{"
    closing_symbols = ")]}"

    for char in expression:
        if char in opening_symbols:
            stack.append(char)
            continue

        elif char in closing_symbols and not stack:
            return False
        
        symbol = stack.pop()
        
        if opening_symbols.index(symbol) != closing_symbols.index(char):
            return False
            
    return len(stack) == 0


expressions_to_test = [
    ["()", True],
    ["({[]})", True],
    ["({)}", False],
    ["[[[]]]", True],
    ["(]", False]
]

for expression, res in expressions_to_test:
    assert is_balanced(expression) == res
    print(".", end='')

print()
