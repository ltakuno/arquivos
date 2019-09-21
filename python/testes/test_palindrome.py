import palindrome

def test_base():
    """ Basic test for palindrome """

    # True positives
    for palavra in ('ovo', 'arara', 'madam', 'bob', 'm'): 
        assert palindrome.eh_palindrome(palavra) == True

    # True negatives
    for palavra in ('xyz', 'elefante', 'python'):
        assert palindrome.eh_palindrome(palavra) == False
