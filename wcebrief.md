# Killer Drones Project Summary

### Project Title: Killer Drones
### Sponsor: N/A (Wildcard)
### Enterprise Team: Wireless Communication
### Faculty Advisor: Kit Cischke

## Project Background
At the time of writing, this project is not sponsored by any company. Rather, it is supported by the funding given to Wireless Communication Enterprise and the individual efforts of our team. The project consists of designing and constructing a quadcopter drone. This drone will be partially controlled by artificial intelligence and computer vision to do various tasks. Artificial Intelligence is an emerging field that has incredible potential. 

## Prior Accomplishments
Using an old drone frame, a battery, and props, we constructed a quadcopter with many capabilities. A microcontroller called a Pixhawk was installed as a flight computer. It recieves inputs from many sources, like GPS, compasses, accelerometers, and gyroscopes in order to maintain stable flight. This is essentially a control system and it can be tuned for different drone designs and flight styles. A radio was installed for manual control and a Raspberry Pi and camera was added as a secondary computer for vision processing. As this was the first semester of the project, there were many issues in the planning process. It took a significant amount of time to iron out the kinks of building a drone and get all the required components.

## Future Project Plans
After the first semester of the project, the drone was fully constructed. Future semesters will focus on improving the drone's flight and working on the artificial intelligence portion. The primary goal of the project is to integrate computer vision with it. This could be used solely for collecting data or as an input to the autopilot. One proposed idea was to have the drone fly a planned route and identify and count different objects or animals. Another idea was to add a tray to the drone for carrying items. One could call the drone and make a request and have the drone retrieve the requested item and carry it back to the person. A third idea was to have the drone track a person's movement and follow them by their side, perhaps carrying something for them.

The drone itself is driven by four propellers which are controlled by a Pixhawk microcontroller. This controller provides a programming interface in which we will signal the autopilot. This programming interface can be accessed from both C and Python. The plan as of now is to begin with Python and reimplement everything in C when a feature is fully developed. As well as having the flight computer, we will also have a Raspberry Pi and a camera on board to handle the computer vision side. This is where our interfacing code will run. The Pi will communicate with the Pixhawk after processing image data. Depending on the complexity of the AI, it may become necessary to offload training and other computation to a laptop with a well suited GPU. In this case, a wireless network will need to be employed to do the processing remotely. As far as carrying objects, there are obvious weight limitations which will need to be addressed. There is a possibility for a drone redesign in future project iterations.

## Project Significance
This project gives the undergraduate student team exposure to artificial intelligence and computer vision, which is growing in the field of electrical and computer engineering. It also gives the team experience with all the challenges of drones including dealing with efficiency and flight time trade-offs. The students will also interface with an API over a wireless telemetry link.
