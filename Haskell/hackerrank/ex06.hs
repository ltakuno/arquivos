import Test.Hspec
import Test.QuickCheck
import Text.Printf (printf)
getMiddle :: String -> String
getMiddle s
	| odd n = [s !! halfN]
	| otherwise = [s !! (halfN - 1), s !! halfN]
	where n = length s
	      halfN = n `div` 2

testGetMid :: String -> String -> Spec
testGetMid s u =
	it (printf "should return getMiddle for s : %s " s) $ getMiddle s `shouldBe` u 

main = hspec $ do
	describe "getMiddle" $ do
	testGetMid "test" "es"
	testGetMid "testing" "t"
	testGetMid "middle" "dd"
	testGetMid "A" "A"

