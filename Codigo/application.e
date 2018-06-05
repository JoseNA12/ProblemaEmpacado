note
	description: "Proyecto 3, problema de empacado"
	author: "José Navarro Acuña"
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		do
			solicitar_datos()
		end


feature {NONE}-- Access
	entrada_usuario: INTEGER
	tamanio_cajas: INTEGER
	tamanio_maximo_objetos: INTEGER
	semilla: INTEGER
	numero_objetos: INTEGER


feature {NONE} -- Element change
	set_tamanio_cajas(valor: INTEGER)
		require
			valor_no_negativo: valor > 0
		do
			tamanio_cajas := valor
		ensure
			tamanio_cajas /= 0
		end


	set_tamanio_maximo_objetos(valor: INTEGER)
		require
			valor_no_negativo: valor > 0
			valor_menor_a_tamanio_cajas: valor < tamanio_cajas
		do
			tamanio_maximo_objetos := valor
		ensure
			tamanio_maximo_objetos /= 0
		end

	set_semilla(valor: INTEGER)
		require
			valorNoNegativo: valor > 0
		do
			semilla := valor
		ensure
			semilla /= 0
		end

	set_numero_objetos(valor: INTEGER)
		require
			valor_no_negativo: valor > 0
		do
			numero_objetos := valor
		ensure
			numero_objetos /= 0
		end


feature {NONE} --Recibir informacion usuario
	solicitar_datos()
		do
			print("Ingrese el tamaño de las cajas asdf hgkuyjl:")
			entrada_usuario := get_input_usuario()
			inspect entrada_usuario
   				when 0 then
					set_tamanio_cajas(10)
           			print("Se ha establecido el valor por default.")
				else
					set_tamanio_cajas(entrada_usuario)
			end

			Io.new_line
			print("Ingrese el tamaño maximo de los objetos:")
			entrada_usuario := get_input_usuario()
			inspect entrada_usuario
   				when 0 then
					set_tamanio_maximo_objetos(7)
					print("Se ha establecido el valor por default.")
				else
					set_tamanio_maximo_objetos(entrada_usuario)
			end

			Io.new_line
			print("Ingrese el valor de la semilla:")
			entrada_usuario := get_input_usuario()
			inspect entrada_usuario
   				when 0 then
					set_semilla(2018)
					print("Se ha establecido el valor por default.")

				else
					set_semilla(entrada_usuario)
			end

			Io.new_line
			print("Ingrese el numero de objetos:")
			entrada_usuario := get_input_usuario()
			inspect entrada_usuario
   				when 0 then
					set_numero_objetos(20)
					print("Se ha establecido el valor por default.")

				else
					set_numero_objetos(entrada_usuario)
			end
			Io.new_line
		end


	get_input_usuario() : INTEGER
		do
			Io.new_line
			Io.read_integer

			--Io.read_line -> Io.last_string

			Result := Io.last_integer
		end

end -- Class APPLICATION
