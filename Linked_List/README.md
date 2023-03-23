### Introduction

Difference between an array_list and a linked_list.

* list
  * array
    * Access is easy, but deletion requires some complexity
  * linked
    * Access is O(n), but deletion is simple(change the link)

### Linked List

* The main structure:

```
class Node {
    ~ element;
    Node * next;
}
```

* Using the address of the next Node, the nodes are "linked".
* ADT(Abstract Data Type):

```
init()
insert()
remove()
```

* The class:

```
head
tail

functions:
insert()
remove()
```


#### insert()

* How?
  * change the link of the prev to the new.
  * link the new to the next.
* The key is to know the values before & after the insertion point.


### Questions

* Why does NULL indicate the end?
  * similar to F/S, it is a convention to indicate the end.
  * if other values were used to indicate the end... the values may occur in the list by chance.
* What is the Node * next?
  * a link. Just like a web address(ex. www.google.com), an address is given and clicked/linked to a new site/screen/node.
