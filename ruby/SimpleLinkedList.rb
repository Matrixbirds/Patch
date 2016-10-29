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

puts head.inspect
