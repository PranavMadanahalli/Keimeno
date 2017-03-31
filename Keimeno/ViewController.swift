//
//  ViewController.swift
//  Keimeno
//
//  Created by Pranav Madanahalli on 3/31/17.
//  Copyright © 2017 Pranav Madanahalli. All rights reserved.
//

import UIKit
import TesseractOCR
import TextToSpeechV1
import AVFoundation

class ViewController: UIViewController, G8TesseractDelegate {

    @IBOutlet var textView: UITextView!
    var audioPlayer: AVAudioPlayer!
    override func viewDidLoad() {
        super.viewDidLoad()
        
       if let tesseract = G8Tesseract(language: "eng"){
        
            tesseract.delegate = self
            tesseract.image = UIImage(named: "demoText")?.g8_blackAndWhite()
        
            tesseract.recognize()
            textView.text = tesseract.recognizedText
            let username = "0323dd98-eb02-4868-8a36-b78ee9640ce2"
            let password = "cgEKeaPkWKQj"
            let textToSpeech = TextToSpeech(username: username, password: password)
        
            let text = tesseract.recognizedText
            let failure = { (error: Error) in print(error) }
            textToSpeech.synthesize(text!, failure: failure) { data in
                self.audioPlayer = try! AVAudioPlayer(data: data)
                self.audioPlayer.play()
            }
        
        }
        
       
        
        
        
        
    }
    func progressImageRecognition(for tesseract: G8Tesseract!){
        
        print("Recognitiion Progress \(tesseract.progress)%")
    }

    

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

