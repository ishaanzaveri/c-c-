//: Playground - noun: a place where people can play

import UIKit
import Foundation


func convertToDegrees(num : Double) -> Double{
    var x : Double
    x = num * Double.pi/ 180
    return x
}

/*var tanNum = [Double]()
for i in stride(from: -Double.pi/2, to: Double.pi/2, by: Double.pi/1024){
tanNum.append(tan(Double(i)))
}*/
for b in 0..<1024{
print(convertToDegrees(num: Double(b) ))
}