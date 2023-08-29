class ArrayOfChars:
    def __init__(self, values):
        self.values = [v for v in values]

    def __str__(self):
        return str().join(self.values)

    def reverse(self):
        values = self.values.copy()
        start = 0
        end = len(self.values) -1

        while start < end:
            temp = values[start]
            values[start] = values[end]
            values[end] = temp
            start += 1
            end -= 1
        return str().join(values)


name = ArrayOfChars('Marconi')
print(name)
print(name.reverse())
