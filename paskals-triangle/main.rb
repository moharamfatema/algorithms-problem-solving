# Given an integer numRows, return the first numRows of Pascal's triangle.
def generate(numRows)
    if numRows < 1
        return []
    end
    current_row = [1]
    result = [current_row.dup]
    for _ in 0..numRows-2
        nxt_row = []
        for i in 1..current_row.length-1
            nxt_row = nxt_row.push(current_row[i] + current_row[i - 1])
        end
        nxt_row = nxt_row.push(1)
        nxt_row = nxt_row.unshift(1)
        result.push(nxt_row)
        current_row = nxt_row.dup

    end
    return result
end

print("Hello World!\n")
p(generate(5))
