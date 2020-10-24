/*

You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.


*/

/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     public var val: Int
 *     public var next: ListNode?
 *     public init() { self.val = 0; self.next = nil; }
 *     public init(_ val: Int) { self.val = val; self.next = nil; }
 *     public init(_ val: Int, _ next: ListNode?) { self.val = val; self.next = next; }
 * }
 */

extension ListNode {
   func addNodeToList(_ nodeValue: Int){
      if self.next != nil{
         self.next!.addNodeToList(nodeValue)
      } else {
         let newList = ListNode(nodeValue)
         self.next = newList
      }
   }    
}

class Solution {
    func addTwoNumbers(_ list1: ListNode?, _ list2: ListNode?) -> ListNode? {
        var sumList: ListNode?
        var l1 = list1
        var l2 = list2
        var carryOver: Int = 0
        
        while l1 != nil || l2 != nil || carryOver != 0 {
            var x1: Int
            var x2: Int
            if l1 == nil {
                x1 = 0
            } else {
                x1 = l1!.val
            }

            if l2 == nil {
                x2 = 0
            } else {
                x2 = l2!.val
            }

            let sum = x1 + x2 + carryOver
            carryOver = sum/10

            if sumList == nil{
                sumList = ListNode(sum % 10)
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
}
