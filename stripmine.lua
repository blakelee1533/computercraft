turnaround()
	for i = 1, 4 do
		turtle.select(2)
		if turtle.compare() ~=true then
			turtle.select(3)
			if turtle.compare() ~= true then
				turtle.dig()
			end
		end
		turtle.turnRight()
	end
end

column()
	turtle.select(3)
	turtle.placeUp()
	local height = 0
	
	for height = 0, 70 do
		turtle.digDown()
		turtle.down()
		turnaround()
	end
	
	for i = 1, 70 do
		turtle.select(3)
		if turtle.compareUp() ~= true then
			turtle.digUp()			
		end
		turtle.select(1)
		turtle.placeDown()
		turtle.up()
		
	end
end

doset()
	for i = 1, 3 do 
		column()
		turtle.forward()
		turtle.forward()
		turtle.turnRight()
		turtle.forward()
		turtle.turnLeft()
	end
	turtle.digUp()
	turtle.select(4)
	for j = 1, 5 do 
	turtle.refuel()
	end
	turtle.select(5)
	turtle.placeUp()
	turtle.dropUp()
end

print("Enter set number: ")
setnumber = read()

for i = 1, setnumber do
doset()
end
turtle.turnLeft()
turtle.turnLeft()
local y = 3*setnumber

for i = 1, y do
turtle.forward()
turtle.forward()
turtle.turnRight()
turtle.forward()
turtle.turnLeft()
end