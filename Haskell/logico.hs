my_and :: Bool -> Bool -> Bool
my_and False _ = False
my_and _ False = False
my_and True True = True


(%%%) :: Bool->Bool->Bool
True %%% x = x
False %%% _ = False

nao::Bool->Bool
nao True = False
nao False = True

(#) :: Bool->Bool->Bool
True # x = x
False # _ = False

(&*) :: Bool->Bool->Bool
x &* y | x == y = x
_ &* _ = False
