require_relative 'vector.rb'
require_relative 'rgb.rb'

class shading
	attr_accessor :n, :l, :I,:k
	def initialize(n,l,I,kd)
		@l=l
		@n=n
		@I=I
		@kd=kd
	end
	def max(n1,n2)
		if n1>n2
		return n1
		else
		return n2 
	end
	end
	def lambertian(kd,l,n,I)
		n.scalar_product(l)
		return L=kd.vector_product(I.num_product(max(0,n.scalar_product(l))))
	end
	def blinn_phong()
	end
	def ambient()
	end

	def isLeft?(n)
	m = n.mod()
	return n.x/m < 0 && n.y/m < 0 && n.z/m < 0
    end

    def normal()
	b_a = @b.minus(@a)
	c_a = @c.minus(@a)
	
	normal = b_a.vector_product(c_a)
	if isLeft?(normal)
		normal = normal.num_product(-1)
	end
	return normal
    end
end