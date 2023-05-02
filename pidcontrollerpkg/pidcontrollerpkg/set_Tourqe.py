# import libraries ............................................
import sys
import signal
import time
import math
from tokenize import Double
from typing import Counter


from torque_message.srv import TRMsg


import rclpy
from rclpy.node import Node
from decimal import *
import csv
import numpy as np

#...........................................................

getcontext().prec = 8


class MinimalClientAsync(Node):


    def __init__(self):
        super().__init__('minimal_client_async')


        # create service and client to apply Torque 
        print("in calling service ")
        self.step_call_cli = self.create_client(TRMsg, 'torque_step')
        self.req = TRMsg.Request()
        
        
        # time counter
        self.counter = Decimal(0.0000)  



    # send request to Service 
    def send_request(self):

        
        while self.counter <= Decimal(1.000) :   # total time 
        
                
            # Apply calculated Torque on FUM6R robot
            self.req.t1 = float(0.1)
            self.req.t2 = float(-5.0)
            self.req.t3 = float(0)
            self.req.t4 = float(0.01)
            self.req.t5 = float(0.01)
            self.req.t6 = float(0.01)
            print("calling Service ")
            
		
            self.future_step = self.step_call_cli.call_async(self.req)
            print("next_step"+str(self.counter))
            self.counter += Decimal("0.0010")      
            
      




def main(args=None):
    rclpy.init(args=args)

    
    minimal_client = MinimalClientAsync()
    minimal_client.send_request()
    minimal_client.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
