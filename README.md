<p align="center">
  <img height="150" width="150" src="https://saferautohome.files.wordpress.com/2019/03/logo-saferauto.jpg?w=1400&h=9999" alt="Safer Auto">  
</p>
<h1 align="center">Safer Auto</h1>
<h4 align="center">Real-time detection system to assist during driving. </h4>

<p align="center">
  <a href="https://github.com/angeligareta/SaferAuto/blob/master/LICENSE">
    <img alt="GitHub" src="https://img.shields.io/github/license/angeligareta/SaferAuto.svg?style=for-the-badge">
  </a>
  <a href="https://saferauto.home.blog/">
    <img alt="Website" src="https://img.shields.io/website/https/saferauto.home.blog.svg?style=for-the-badge">
  </a>
  <a href="https://twitter.com/SaferAuto">
    <img alt="Twitter Follow" src="https://img.shields.io/twitter/follow/SaferAuto.svg?style=for-the-badge">
  </a>
  <a href="https://github.com/ellerbrock/open-source-badges/">
    <img alt="Website" src="https://badges.frapsoft.com/os/v1/open-source-175x29.png?v=103">
  </a>
</p>


<p align="center">
  <a href="#key-features">Key Features</a> •
  <a href="#how-to-use">How To Use</a> •
  <a href="#author">Author</a> •
  <a href="#license">License</a>
</p>

Detect, locate and track road elements from a video stream using **[YOLOv3](https://pjreddie.com/darknet/yolo/) real-time object detection system**. Among the elements to classify, the model will be trained to detect traffic lights, vehicles and some types of road signs.

## Key Features
* Detection of speed limit road signs and speed identification.
* Detection of traffic lights and classification depending on its state (green, amber, red). *[work in progress]*
* Detection of cars and classification of the type. *[work in progress]*
* Detect the previous elements in real-time. *[work in progress]*
* Track the previous elements in real-time. *[work in progress]*
* Implementation of a chatbot that notifies the driver of possible road threats and is able to repeat last notifications. *[work in progress]*
* UI that displays the current detection and tracking of the road elements, showing bounding boxes with the different classes. *[work in progress]*

## How to use
The current state of SaferAuto is **beta**, for the moment only the model for detecting speed limit road signs has been trained. However, the next feature to release will be a UI to try the detection with a real video stream.

## Author
[**Ángel Igareta**](https://github.com/angeligareta) - Computer Engineering Student

## License
This project is licensed under the **[MIT License](LICENSE)**
