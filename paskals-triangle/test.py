import unittest
import numpy as np
from numpy import testing as npt
from main import generate, generate_2

class testPascalsTriangle(unittest.TestCase):

    def test_num_rows(self):
        correct = np.array([
            [1],
            [1,1],
            [1,2,1],
            [1,3,3,1],
            [1,4,6,4,1]
        ])
        out = generate(5)
        npt.assert_array_equal(out,correct)
        correct = np.array([
            [1]
        ])
        out = generate(1)
        npt.assert_array_equal(out,correct)

    def test_num_rows_2(self):
        correct = np.array([
            [1],
            [1,1],
            [1,2,1],
            [1,3,3,1],
            [1,4,6,4,1]
        ])
        out = generate_2(5)
        npt.assert_array_equal(out,correct)
        correct = np.array([
            [1]
        ])
        out = generate_2(1)
        npt.assert_array_equal(out,correct)
