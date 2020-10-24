/*
Problem: You are given two linked list representing two non-negative numbers.
The digit are stored in the reverse order and each of their nodes contain a single digit
Add the two numbers and return it as a linked list

Example:
 Input:  (2-> 4 -> 3) + (5 -> 6 -> 4)
 Output: (7 -> 0 -> 8)
*/

class Node {
   var value: Int = 0
   var next : Node?

   init(_ value: Int){
      self.value = value
   }

   func addNodeToList(_ nodeValue: Int){
      if self.next != nil{
         self.next!.addNodeToList(nodeValue)
      } else {
         let newList = Node(nodeValue)
         self.next = newList
      }
   }

   func displayNode(){
      print(self.value)
      self.next?.displayNode()
   }
}


func addTwoNumbers(_ list1: Node?, _ list2: Node?) -> Node{
   var sumList: Node?
   var l1 = list1
   var l2 = list2

   var carryOver: Int = 0

   while l1 != nil || l2 != nil || carryOver != 0 {
      var x1: Int
      var x2: Int
      if l1 == nil {
          x1 = 0
      } else {
          x1 = l1!.value
      }

      if l2 == nil {
          x2 = 0
      } else {
          x2 = l2!.value
      }

      let sum = x1 + x2 + carryOver
      carryOver = sum/10
      
      if sumList == nil{
          sumList = Node(sum % 10)
      } else {
          sumList?.addNodeToList(sum % 10) 
      }

      l1 = l1?.next
      l2 = l2?.next
   }

   if carryOver > 0 {
      sumList?.addNodeToList(carryOver) 
   }

   return sumList!
}


let firstList = Node(2)
firstList.addNodeToList(4) 
firstList.addNodeToList(3) 

let secondList = Node(5)
secondList.addNodeToList(6) 
secondList.addNodeToList(4)

let total = addTwoNumbers(firstList, secondList) 
total.displayNode()

