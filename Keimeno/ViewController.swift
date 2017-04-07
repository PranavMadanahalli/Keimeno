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
import ALCameraViewController

class ViewController: UIViewController, UITextViewDelegate, G8TesseractDelegate {

    var audioPlayer: AVAudioPlayer!
    var imageGlobal: UIImage!
    
    @IBOutlet var textView: UITextView!
    @IBOutlet var imageView: UIImageView!
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.textView.delegate = self;

        textView.text = " "
        

    }
    @IBAction func playAudio(_ sender: Any) {
        
        
        let username = "0323dd98-eb02-4868-8a36-b78ee9640ce2"
        let password = "cgEKeaPkWKQj"
        let textToSpeech = TextToSpeech(username: username, password: password)
        
        print("\(textView.text)")
        let failure = { (error: Error) in print(error) }
        textToSpeech.synthesize(textView.text, failure: failure) { data in
            self.audioPlayer = try! AVAudioPlayer(data: data)
            self.audioPlayer.play()
        }

    }
    @IBAction func clearTextButton(_ sender: Any) {
        
        textView.text = " "
    }
    @IBAction func openCamera(_ sender: Any) {
        
        let cameraViewController = CameraViewController(croppingEnabled: true, allowsLibraryAccess: true) { [weak self] image, asset in
            self?.imageView.image = image
            self?.dismiss(animated: true, completion: nil)

            if let tesseract = G8Tesseract(language: "eng"){
                
                tesseract.delegate = self
                tesseract.image = self?.imageView.image?.g8_blackAndWhite()
                
                tesseract.recognize()
                self?.textView.text = (self?.textView.text)! + tesseract.recognizedText
                
            }
        }
        
        
        present(cameraViewController, animated: true, completion: nil)
        
        
        
    }
    @IBAction func openLibrary(_ sender: Any) {
        let libraryViewController = CameraViewController.imagePickerViewController(croppingEnabled: true) { image, asset in
            self.imageView.image = image
            self.dismiss(animated: true, completion: nil)
        }
        
        
        present(libraryViewController, animated: true, completion: nil)
    }
    
    
    func progressImageRecognition(for tesseract: G8Tesseract!){
        
        print("Recognitiion Progress \(tesseract.progress)%")
    }
    func textView(_ textView: UITextView, shouldChangeTextIn range: NSRange, replacementText text: String) -> Bool {
        if(text == "\n") {
            textView.resignFirstResponder()
            return false
        }
        return true
    }

    

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }


}

