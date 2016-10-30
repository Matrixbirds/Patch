class ListNode
    attr_accessor :val, :next
    def initialize(val)
        @val = val
        @next = nil
    end
end

head = ListNode.new(nil)

[1,2,3,4].inject(cur = head) do |list, e|
  cur.next = ListNode.new(e)
  cur = cur.next
end

require 'ostruct'
linkedList = OpenStruct.new ptr: nil, head: nil
[1,2,3,4]
  .map { |e| ListNode.new e }
  .reduce(linkedList) do |list, cur|
    if list.ptr
      list.ptr.next = cur
      list.ptr = list.ptr.next
    else
      list.head = list.ptr = cur
    end
    puts "#{list.inspect}"
    list
end
