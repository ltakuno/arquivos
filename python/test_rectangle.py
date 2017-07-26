from unittest import TestCase
from geometry import Rectangle

class TestRectangle(TestCase):
	def test_area_succeedes(self):
		r = Rectangle(2, 3)
		self.assertEqual(r.area(), 6)
