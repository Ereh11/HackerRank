def mutate_string(string, position, character):
    lt = list(string); lt[position] = character
    return ''.join(lt)

if __name__ == '__main__':
    s = input()
    i, c = input().split()
    s_new = mutate_string(s, int(i), c)
    print(s_new)