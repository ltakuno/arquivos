let dictArray = [["key1":"value1","key2":"value2"],["key3":"value3"]]

let flatDictArray = dictArray.flatMap{$0}
print(flatDictArray)

var dictionary = [String: String]()
flatDictArray.forEach{
    dictionary[$0.0] = $0.1
}
print(dictionary)
// ["key2": "value2", "key1": "value1", "key3": "value3"]

