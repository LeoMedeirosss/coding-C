converteABC :: Char -> Char
converteABC y
  | (toEnum(fromEnum y)>=97) && (toEnum(fromEnum y)<=122) = toEnum(fromEnum y - 32)
  | otherwise = y


elemNum :: Int -> [Int] -> Int
elemNum x [] = 0
elemNum x (y:ys)
 | x == y = elemNum x (ys) + 1
 | otherwise = elemNum x (ys)


unique :: [Int] -> [Int]
unique [] = []
unique (x:xs)
  | addNum x xs == True = unique(deleteNum x xs)
  | otherwise = x:unique xs


--funções secundarias da unique
addNum :: Int -> [Int] -> Bool
addNum x [] = False
addNum x (y:ys)
  | x == y = True
  | otherwise = addNum x (ys)

deleteNum :: Int -> [Int] -> [Int]
deleteNum x [] = []
deleteNum x (y:ys)
  | x == y = deleteNum x (ys)
  | otherwise = y: deleteNum x (ys)