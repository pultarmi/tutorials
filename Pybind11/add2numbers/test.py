import binded_tools
import unittest

class Test(unittest.TestCase):

    def test(self):
        res = binded_tools.add_numbers(1,3)
        print('adding two numbers')
        self.assertTrue(res == 4)


if __name__ == '__main__':
    unittest.main()