'use strict';

class Node {
  constructor(data) {
    this._data = data;
    this._next = null;
  }

  get next() {
    return this._next;
  }

  set next(next) {
    this._next = next;
  }

  get data() {
    return this._data;
  }

  set data(data) {
    this._data = data;
  }
}

function _getLastNode(node) {
  while(node && node.next) {
    node = node.next;
  }
  return node;
}

function _appendTo(node, cb) {
  cb.call(this, node);
}

class LinkedList {
  constructor() {
    this._head = this._node = null;
  }

  get head() {
    return this._head;
  }

  set head(val) {
    this._head = val;
  }

  append(node) {
    let headNode = this.head;
    if (!headNode) {
      headNode = node;
      this.head = headNode;
    }
    else {
      let lastNode = _getLastNode(headNode);
      _appendTo(lastNode, function(self) {
        if (self.next) {
          next = node;
        }
        else {
          self = node;
        }
      });
    }
  }
}

// l = new LinkedList();
// l.append(new Node('1'));
// l.append(new Node('2'));
// l.append(new Node('3'));
// l.append(new Node('4'));
// console.log(l);
// should be output similar { _ data: '1', _next: { _data: '2', ... } }
