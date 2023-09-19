#!/usr/bin/env python3
import unittest
from modules.customer import Customer

class TestCustomer(unittest.TestCase):

    def setUp(self):
        #creating new customers
        #Customer() expects 3 args: first_name, last_name, purchase
        self.customer_1 = Customer('John', 'Brad', 5000)
        self.customer_2 = Customer('Tina', 'Smith', 3000)

    def test_customer_mail(self):
        self.assertEqual(self.customer_1.customer_mail, 'John.Brad@email.com')
        self.assertEqual(self.customer_2.customer_mail, 'Tina.Smith@email.com')

    def test_customer_fullname(self):
        self.assertEqual(self.customer_1.customer_fullname, 'John Brad')
        self.assertEqual(self.customer_2.customer_fullname, 'Tina Smith')

    def test_apply_discount(self):
        self.customer_1.apply_discount()
        self.customer_2.apply_discount()

        self.assertEqual(self.customer_1.purchase, 4750)
        self.assertEqual(self.customer_2.purchase, 2850)