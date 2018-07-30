extends Node2D

# Called when the node enters the scene tree for the first time.
func _ready():
	# instantiating a GDNative class
	# var test = load("res://bin/gdtest.gdns").new()
	# print(test.a_method())
	
	# script attached to node
	print($Test.a_method())

