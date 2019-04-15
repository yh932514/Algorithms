/*
Given a sorted linked list, delete all duplicates such that each element appear only once.

Example 1:

Input: 1->1->2
Output: 1->2
Example 2:

Input: 1->1->2->3->3
Output: 1->2->3
*/
//Runtime: 72 ms, faster than 89.65% of JavaScript online submissions for Remove Duplicates from Sorted List.
/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var deleteDuplicates = function(head) {
    var point = head; 
    while(point){
        if(point.next && point.val == point.next.val){
            var temp=point.next;
            point.next = point.next.next; 
            delete temp; 
        }
        else
            point = point.next;
    }
    return head;
};
