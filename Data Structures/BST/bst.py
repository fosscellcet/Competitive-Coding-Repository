class Node:
	"""docstring for Node"""
	def __init__(self, val, lchild, rchild):
		self.val = val
		self.lchild = lchild
		self.rchild = rchild
	
	def insert(self, value):
		if self.val < value:
			if self.rchild is None:
				self.rchild = Node(value, None, None)
				return
			self.rchild.insert(value)
		elif self.val > value:
			if self.lchild is None:
				self.lchild = Node(value, None, None)
				return
			self.lchild.insert(value)
		else:
			print("{0} already exists.".format(value))

	def search(self, key):
		if self.val == key:
			return True
		elif self.val > key:
			if self.lchild is None:
				return False
			return self.lchild.search(key)
		elif self.val < key:
			if self.rchild is None:
				return False
			return self.rchild.search(key)

	def display(self):
		if self.lchild is not None:
			self.lchild.display()
		
		print(self.val)
		
		if self.rchild is not None:
			self.rchild.display()


root = Node(10, None, None)
root.insert(2)
root.insert(4)
root.insert(5)
root.insert(12)
root.insert(23)
root.display()
