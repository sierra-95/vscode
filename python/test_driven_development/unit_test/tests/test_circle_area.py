#!/usr/bin/env python3
# -*- coding: utf-8 -*-
from modules.circle_area import circle_areas
from math import pi
import unittest

class Test_circle_area(unittest.TestCase):

    def test_positive_numbers(self):
        result= circle_areas(2)
        self.assertAlmostEqual(result,pi*2*2)

    def test_non_int(self):
        self.assertRaises(TypeError,circle_areas,"name")

if __name__=="__main__":
    unittest.main()