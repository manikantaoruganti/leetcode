var reverseList = function(head) {
    let prev = null;
    let current = head;

    while (current !== null) {
        let nextNode = current.next; // Save next
        current.next = prev;         // Reverse link
        prev = current;              // Move prev forward
        current = nextNode;         // Move current forward
    }

    return prev; // New head of reversed list
};
