'''
Given an integer numRows, return the first numRows of Pascal's triangle.
'''

def generate(numRows: int):
    if numRows < 1:
        return []
    currentRow = [1]
    result = [currentRow]
    for _ in range(numRows - 1):
        nxtRow = [currentRow[i] + currentRow[i - 1] for i in range(1, len(currentRow))]
        nxtRow = [1]+ nxtRow + [1]
        print (nxtRow)
        currentRow = nxtRow
        result.append(nxtRow)
    return result

def generate_2(numRows: int):
    if numRows < 1:
        return []
    nxtRow = [1]
    result = [nxtRow]
    for _ in range(numRows - 1):
        nxtRow = [nxtRow[i] + nxtRow[i - 1] for i in range(1, len(nxtRow))]
        nxtRow = [1]+ nxtRow + [1]
        print (nxtRow)
        result.append(nxtRow)
    return result
