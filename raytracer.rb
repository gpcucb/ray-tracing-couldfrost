require_relative 'renderer.rb'
require_relative 'camera.rb'
require_relative 'vector.rb'
require_relative 'rgb.rb'
require_relative 'intersection.rb'
require_relative 'sphere.rb'
require_relative 'triangle.rb'
require_relative 'light.rb'
require_relative 'material.rb'

class RayTracer < Renderer

  attr_accessor :camera

  def initialize(width, height)
    super(width, height, 250.0, 250.0, 250.0)
    #light values
    light_color = Rgb.new(0.8,0.7,0.6)
    light_position = Vector.new(0.0, 0.0, 200.0)
    @light = Light.new(light_position,light_color)
    @ambient_light = Rgb.new(0.15,0.15,0.15)
    @ka = @kd

    @nx = @width
    @ny = @height
    # Camera values
    e= Vector.new(278,273,-800)
    center= Vector.new(278,273,-700)
    up= Vector.new(0,1,0)
    fov= 39.31
    df=0.035
    @camera = Camera.new(e, center, up, fov, df)

    # Sphere values
    position = Vector.new(370,370,370)
    radius =120
    sphere_diffuse = Rgb.new(0.7,0.4,0.0)
    sphere_specular =Rgb.new(1.0,1.0,1.0)
    sphere_reflection = 0.5
    sphere_power = 60
    sphere_material = Material.new(sphere_diffuse, sphere_reflection, sphere_specular, sphere_power)
    # Sphere values2
    position2 = Vector.new(500,500,375)
    radius2 = 240
    sphere_diffuse2 = Rgb.new(1.0, 1.0, 1.0)
    sphere_specular2 =Rgb.new(1.0,1.0,1.0)
    sphere_reflection2 = 1
    sphere_power2 = 60
    sphere_material2 = Material.new(sphere_diffuse2, sphere_reflection2, sphere_specular2, sphere_power2)
    # Sphere values3
    position3 = Vector.new(450,450,375)
    radius3 = 200
    sphere_diffuse3 = Rgb.new(0.2, 0.5, 1.0)
    sphere_specular3 =Rgb.new(1.0,1.0,1.0)
    sphere_reflection3 = 1
    sphere_power3 = 60
    sphere_material3 = Material.new(sphere_diffuse3, sphere_reflection3, sphere_specular3, sphere_power3)
    # Triangle values
    a = Vector.new(252,8,0)
    b = Vector.new(259,259,0)
    c = Vector.new(0,0,259)
    triangle_diffuse = Rgb.new(1.5,0.4,0.0)
    triangle_specular = Rgb.new(1.0,1.0,1.0)
    triangle_reflection = 0.5
    triangle_power = 60
    triangle_material = Material.new(triangle_diffuse, triangle_reflection, triangle_specular, triangle_power)
 # Triangle values2
    a2 = Vector.new(552,-11,0)
    b2 = Vector.new(-10,-10,-10)
    c2 = Vector.new(0,0,560)
    triangle_diffuse2 = Rgb.new(0.0,0.5,0.0)
    triangle_specular2 = Rgb.new(1.0,1.0,1.0)
    triangle_reflection2 = 0.5
    triangle_power2 = 60
    triangle_material2 = Material.new(triangle_diffuse2, triangle_reflection2, triangle_specular2, triangle_power2)
 # Triangle values3
    a3 = Vector.new(552,8,0)
    b3 = Vector.new(-10,-10,-10)
    c3 = Vector.new(0,0,560)
    triangle_diffuse3 = Rgb.new(0.0,0.1,0.0)
    triangle_specular3 = Rgb.new(1.0,1.0,1.0)
    triangle_reflection3 = 0.5
    triangle_power3 = 60
    triangle_material3 = Material.new(triangle_diffuse3, triangle_reflection3, triangle_specular3, triangle_power3)

    @sphere = Sphere.new(position, radius, sphere_material)
    @sphere2 = Sphere.new(position2, radius2, sphere_material2)
    @sphere3 = Sphere.new(position3, radius3, sphere_material3)
    @triangle = Triangle.new(a, b, c, triangle_material)
    @triangle2 = Triangle.new(a2, b2, c2, triangle_material2)
    @objects=[]
    @objects << @sphere << @sphere2 << @sphere3 << @triangle2 << @triangle 
  end

  def calculate_pixel(i, j)
    e = @camera.e
    dir = @camera.ray_direction(i,j,@nx,@ny)
    ray = Ray.new(e, dir)
    t = Float::INFINITY

    @obj_int = nil#intersected object
    @objects.each do |obj|
      intersection = obj.intersection?(ray, t)
      if intersection.successful?
        @obj_int = obj
        t = intersection.t
      end
    end
    if @obj_int==nil
      color = Rgb.new(0.0,0.0,0.0)
    else
      color = @obj_int.material.diffuse #2D
    end

    return {red: color.r, green: color.g, blue: color.b}
  end
end
